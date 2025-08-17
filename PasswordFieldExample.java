package gui;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class PasswordFieldExample extends JFrame {
    private JPasswordField pass;
    private JCheckBox ch;
    private JTextArea ta;
    private JTextField tx;
    private JButton btn,btn1;
    public PasswordFieldExample() {
        setTitle("Password Field Example");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(500, 150);
        
        JPanel panel = new JPanel();
        JPanel panel2 = new JPanel();
        JLabel l1 = new JLabel("User Name:");
        panel.add(l1);
        tx = new JTextField(10);
        panel.add(tx);
        
        JLabel l2 = new JLabel("Password:");
        panel.add(l2);
        
        pass = new JPasswordField(10);
        panel.add(pass);
     
        ch = new JCheckBox("Show Password");
        ta = new JTextArea();
        ch.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                showHide();
            }
        });
        btn = new JButton("Enter");
        btn1 = new JButton("Clear");
        btn.addActionListener(new ActionListener() {
        	String str; 
        	@Override
            public void actionPerformed(ActionEvent e) {
        		str = String.valueOf(pass.getPassword());
                ta.append(tx.getText() + " "+ str+"\n");
            }
        });
        btn1.addActionListener(new ActionListener() {
        	String str; 
        	@Override
            public void actionPerformed(ActionEvent e) {
        		tx.setText("");
        		pass.setText("");
            }
        });
        panel.add(ch);

        add(panel, BorderLayout.NORTH);
        add(new JScrollPane(ta));
        panel2.add(btn);
        panel2.add(btn1);
        add(panel2, BorderLayout.SOUTH);
        
    }

    private void showHide() {
        if (ch.isSelected()) {
            pass.setEchoChar((char) 0);
        } else {
            pass.setEchoChar('*');
        }
    }

    public static void main(String[] args) {
    	PasswordFieldExample pe = new PasswordFieldExample();
    	pe.setVisible(true);
    }
}