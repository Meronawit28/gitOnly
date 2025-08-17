import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class BasicForm extends JFrame {

    String[] skillLevels = {"Beginner", "Intermediate", "Senior/Expert"};

    public BasicForm() {
        setTitle("Basic Form");
        setSize(450, 500);
        setDefaultCloseOperation(JFrame.DO_NOTHING_ON_CLOSE);
        setLocationRelativeTo(null);
        
        this.addWindowListener(new WindowAdapter() {
			@Override
			public void windowClosing(WindowEvent e) {
			
				int result = JOptionPane.showConfirmDialog(BasicForm.this, "Are you sure you want to exit?", "Confirm Exit", JOptionPane.YES_NO_OPTION, JOptionPane.QUESTION_MESSAGE);
				
				if(result == JOptionPane.YES_OPTION) {
					BasicForm.this.dispose();
				}
				
				
				/*
				JOptionPane.showMessageDialog(frame, "You are about to close the window", "Error Message", JOptionPane.ERROR_MESSAGE);
				JOptionPane.showMessageDialog(frame, "You are exiting", "Plain Message", JOptionPane.PLAIN_MESSAGE);
				JOptionPane.showMessageDialog(frame, "You are exiting", "Warning Message", JOptionPane.WARNING_MESSAGE);
				JOptionPane.showMessageDialog(frame, "You are exiting", "Information Message", JOptionPane.INFORMATION_MESSAGE);
				
				System.exit(0);
				
				*/
			}
			
		});


        JLabel messagLabel = new JLabel();
        messagLabel.setForeground(Color.red);

        // Main panel
        JPanel mainPanel = new JPanel();
        mainPanel.setLayout(new BoxLayout(mainPanel, BoxLayout.Y_AXIS));
        mainPanel.setBorder(BorderFactory.createEmptyBorder(20, 20, 20, 20));
        mainPanel.setBackground(Color.white);

        // Title
        JLabel titleLabel = new JLabel("Registration Form");
        titleLabel.setAlignmentX(Component.CENTER_ALIGNMENT);
        titleLabel.setFont(new Font("Arial", Font.BOLD, 22));
        mainPanel.add(titleLabel);
        
        // Separator
        JSeparator separator = new JSeparator();
        separator.setMaximumSize(new Dimension(Integer.MAX_VALUE, 1));
        mainPanel.add(Box.createRigidArea(new Dimension(0, 10)));
        mainPanel.add(separator);
        mainPanel.add(Box.createRigidArea(new Dimension(0, 10)));

        // Form fields
        JTextField nameField = new JTextField(20);
        mainPanel.add(createFormField("Name:", nameField));

        nameField.addFocusListener(new FocusAdapter() {
            @Override
            public void focusLost(FocusEvent e){
                boolean nameTest = isValidName(nameField.getText());
                if(nameTest){
                    messagLabel.setText(null);
                }
                else{
                    messagLabel.setText("The name is not valid");
                }
            }
        });

        JTextField emailField = new JTextField(20);
        mainPanel.add(createFormField("Email:", emailField));

        JPasswordField passwordField = new JPasswordField(20);
        passwordField.setEchoChar('*');
        mainPanel.add(createFormField("Password:", passwordField));

        passwordField.addKeyListener(new KeyAdapter() {
            @Override
            public void keyTyped(KeyEvent e){
                char c = e.getKeyChar();
                System.out.print(c);
            }
        });

        JComboBox<String> skillComboBox = new JComboBox<>(skillLevels);
        skillComboBox.setFocusable(false);
        skillComboBox.setBackground(Color.white);
        skillComboBox.setPreferredSize(new Dimension(200, 30));
        mainPanel.add(createFormField("Skill Level:", skillComboBox));

        // Gender radio buttons
        JPanel genderPanel = new JPanel(new FlowLayout(FlowLayout.LEFT));
        genderPanel.setOpaque(false);

        JLabel genderLabel = new JLabel("Gender:");
        genderLabel.setPreferredSize(new Dimension(80, 25));
        genderPanel.add(genderLabel);

        ButtonGroup genderGroup = new ButtonGroup();

        JRadioButton femaleRadio = new JRadioButton("Female");
        femaleRadio.setFocusable(false);
        femaleRadio.setPreferredSize(new Dimension(100, 30));
        femaleRadio.setOpaque(false);

        JRadioButton maleRadio = new JRadioButton("Male");
        maleRadio.setFocusable(false);
        maleRadio.setPreferredSize(new Dimension(100, 30));
        maleRadio.setOpaque(false);

        genderGroup.add(maleRadio);
        genderGroup.add(femaleRadio);
        genderPanel.add(femaleRadio);
        genderPanel.add(maleRadio);
        mainPanel.add(genderPanel);
        

        // Terms checkbox
        JPanel termsPanel = new JPanel(new FlowLayout(FlowLayout.LEFT));
        termsPanel.setOpaque(false);
        JCheckBox acceptTerms = new JCheckBox("I accept the terms and conditions");
        acceptTerms.setSelected(true);
        acceptTerms.setFocusable(false);
        acceptTerms.setOpaque(false);
        termsPanel.add(acceptTerms);
        mainPanel.add(termsPanel);

        // Buttons
        JPanel buttonPanel = new JPanel(new FlowLayout(FlowLayout.CENTER, 80, 0));
        buttonPanel.setOpaque(false);


        RegisteredPeople registered = new RegisteredPeople();

        JButton cancelButton = new JButton("Cancel");
        cancelButton.setFocusable(false);
        cancelButton.setPreferredSize(new Dimension(100, 30));

        cancelButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e){
                nameField.setText("");
                emailField.setText("");
                passwordField.setText("");
                skillComboBox.setSelectedIndex(0);
                genderGroup.clearSelection();
                acceptTerms.setSelected(true);
            }
        });

        JButton submitButton = new JButton("Submit");
        submitButton.setFocusable(false);
        submitButton.setPreferredSize(new Dimension(100, 30));

        // Submit action listener
        submitButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed (ActionEvent e){
                String name = nameField.getText();
                String email = emailField.getText();
                String password = new String(passwordField.getPassword());
                String skillLevel = (String) skillComboBox.getSelectedItem();
                String gender = (maleRadio.isSelected() ? "Male" : "Female");
                String terms = (acceptTerms.isSelected() ? "Yes" : "No");

                if(name.isEmpty() || email.isEmpty() || password.isEmpty() || skillLevel.isEmpty() || gender.isEmpty() || !terms.equals("Yes")) {
                    JOptionPane.showMessageDialog(BasicForm.this, "Please fill in all fields.", "Warning", JOptionPane.WARNING_MESSAGE);
                }
                else{
                    Person person = new Person(name, email, password, skillLevel, gender);
                    registered.registeredPeople.add(person);
                    JOptionPane.showMessageDialog(BasicForm.this, "Registration Successful!");
                    registered.displayRegisteredPeople();
                }
        }});
        
        cancelButton.setBackground(new Color(255, 200, 200)); // Light red
        submitButton.setBackground(new Color(200, 255, 200)); // Light green
        
        JPanel messagePanel = new JPanel();
        messagePanel.setOpaque(false);

        messagePanel.add(messagLabel);

        buttonPanel.add(cancelButton);
        buttonPanel.add(submitButton);
        mainPanel.add(buttonPanel);
        mainPanel.add(messagePanel);

        add(mainPanel);
    }

    private JPanel createFormField(String label, JComponent field) {
        JPanel panel = new JPanel(new FlowLayout(FlowLayout.LEFT));
        JLabel jLabel = new JLabel(label);
        jLabel.setPreferredSize(new Dimension(80, 25));
        panel.add(jLabel);
        panel.add(field);
        panel.setOpaque(false);
        return panel;
    }

    public boolean isValidName(String name) {
    
        if(!name.matches("[a-zA-Z ]+") || name.length()<2){
            return false;
        }
        return true;
    }

    public static void main(String[] args) {
    	new BasicForm().setVisible(true);
    }
}
