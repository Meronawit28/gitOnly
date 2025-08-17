/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package PkgCalculator;

import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.Font;
import java.awt.GridLayout;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;

/**
 *
 * @author HP
 */
public class Calculator extends JFrame{
    private JTextField txtDisplay;
    private JPanel pnlButton;

    public Calculator(){
        setTitle("My Calculator");
        setSize(400,400);
        getContentPane().setBackground(Color.white);
        setLocationRelativeTo(null);
        setResizable(true);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setLayout(new BorderLayout(10,10));
        
        txtDisplay = new JTextField();
        Font font = new Font("Arial", Font.PLAIN, 20);  // 20 is the font size
        txtDisplay.setFont(font);
        txtDisplay.setHorizontalAlignment(JTextField.RIGHT);
        add(txtDisplay,BorderLayout.NORTH);
        
        JPanel pnlButton = new JPanel(new GridLayout(4,4,10,10));
        String captions[]={"7","8","9","/","4","5","6","*",
            "1","2","3","-","0","C","=","+"};
        ButtonListner bl = new ButtonListner(txtDisplay);
        for(String c : captions){
            JButton btn = new JButton(c);// step 1 source
            btn.addActionListener(bl); //Step 3 
            pnlButton.add(btn);
        }
        add(pnlButton,BorderLayout.CENTER);
        
        JLabel lblBottom = new JLabel("  Java Calculator Example  ");
        lblBottom.setForeground(Color.red);
        Font lfont = new Font("Arial", Font.PLAIN, 25); 
        lblBottom.setFont(lfont);
        add(lblBottom,BorderLayout.SOUTH);
        
        setVisible(true);
        pack();
    }    
}
