/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package PkgCalculator;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JTextField;

/**
 *
 * @author HP
 */
public class ButtonListner implements ActionListener{
    private JTextField displayField;
    private String operator;
    private double num1, num2, result;
    
    public ButtonListner(){}
    public ButtonListner(JTextField displayField){
        this.displayField = displayField;
    }
    @Override
    public void actionPerformed(ActionEvent e) {
        String command = e.getActionCommand();
        //JOptionPane.showMessageDialog(null,command);
        
        if (command.charAt(0) >= '0' && command.charAt(0) <= '9') {
            displayField.setText(displayField.getText() + command);
        } 
        else if (command.equals("C")) {
            displayField.setText("");
            operator = "";
            num1 = num2 = result = 0;
        } 
        else if (command.equals("=")) {
            num2 = Double.parseDouble(displayField.getText());
            switch (operator) {
                case "+" : 
                    result = num1 + num2;
                    break;
                case "-" :
                    result = num1 - num2;
                    break;
                case "*" : 
                    result = num1 * num2;
                    break;
                case "/" : 
                    result = num1 / num2;
                    break;
            }
            displayField.setText(""+result);
        } 
        else {//+ or * or - or /
            operator = command;
            num1 = Double.parseDouble(displayField.getText());
            displayField.setText("");
        }
    }
    
}
