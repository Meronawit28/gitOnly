import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class BeautifulGuiApp {
    public static void main(String[] args) {
        // Create the main frame
        JFrame frame = new JFrame("Beautiful GUI Application");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(400, 300);
        frame.setLocationRelativeTo(null);
        
        // Set layout
        frame.setLayout(new BorderLayout());

        // Create a panel for the top section
        JPanel topPanel = new JPanel();
        topPanel.setBackground(Color.CYAN);
        JLabel titleLabel = new JLabel("Welcome to the Beautiful GUI!");
        titleLabel.setFont(new Font("Arial", Font.BOLD, 18));
        topPanel.add(titleLabel);
        
        // Create a text area for displaying messages
        JTextArea textArea = new JTextArea();
        textArea.setFont(new Font("Arial", Font.PLAIN, 14));
        textArea.setLineWrap(true);
        textArea.setWrapStyleWord(true);
        textArea.setEditable(false);
        
        // Create a button
        JButton button = new JButton("Click Me!");
        button.setFont(new Font("Arial", Font.BOLD, 16));
        
        // Add action listener to the button
        button.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                textArea.append("Button Clicked! Welcome to Java Swing!\n");
            }
        });
        
        // Create a panel for the button
        JPanel buttonPanel = new JPanel();
        buttonPanel.setBackground(Color.LIGHT_GRAY);
        buttonPanel.add(button);
        
        // Add components to the frame
        frame.add(topPanel, BorderLayout.NORTH);
        frame.add(new JScrollPane(textArea), BorderLayout.CENTER);
        frame.add(buttonPanel, BorderLayout.SOUTH);

        // Make the frame visible
        frame.setVisible(true);
    }
}


