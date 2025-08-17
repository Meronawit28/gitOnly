package gui;
import java.awt.*;
import javax.swing.*;
import java.awt.event.*;
/*	Null Layout Manager
 * 	setLayout(null);
 * 	p1.setLayout(null);
 * 		method: setBounds(x-axis, y-axis, width, height)
 * 			b1.setBounds(20,40,100,90);
 * */

/*Exception: Checked and Unchecked
 * 
 * */
public class NullLayout extends JFrame {//implements ActionListener{
	JLabel l1,l2,l3;
	JTextField t1,t2,t3;
	JButton b1;
	public NullLayout() {
		super("Null Layout");
		l1 = new JLabel("Number1 ghggfgf");
		l2 = new JLabel("Number2");
		l3 = new JLabel("Result");
		
		t1 = new JTextField();
		t2 = new JTextField();
		t3 = new JTextField();
		
		b1 = new JButton("Calculate");
		
		//set the Layout
		setLayout(null);
		
		//set the positions of the components
		l1.setBounds(10,10,100,25);
		l2.setBounds(10,45,100,25);
		l3.setBounds(10,80,100,25);
		
		t1.setBounds(120,10,100,25);
		t2.setBounds(65,45,100,25);
		t3.setBounds(65,80,100,25);
		b1.setBounds(35,120,100,20);
		
		//add the components
		add(l1);
		add(l2);
		add(t1);
		add(t2);
		add(l3);
		add(t3);
		add(b1);
		
		//Register the calculate button to the listener
		Listener lis = new Listener();
		IndependentListener il = new IndependentListener(this);
		b1.addActionListener(il);
		
		/*b1.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
				String s1 = t1.getText();
				String s2 = t2.getText();
				int num1 = Integer.parseInt(s1);
				int num2 = Integer.parseInt(s2);
				int res = num1 + num2;
				t3.setText(String.valueOf(res));
			}
		});*/
		setSize(500,200);
		setVisible(true);
	}
	public static void main(String[] args) {
		NullLayout nl = new NullLayout();

	}
	
	//Inner Listener class
	class Listener implements ActionListener{
		@Override
		public void actionPerformed(ActionEvent e) {
			String s1 = t1.getText();
			String s2 = t2.getText();
			int num1 = Integer.parseInt(s1);
			int num2 = Integer.parseInt(s2);
			int res = num1 + num2;
			t3.setText(String.valueOf(res));
		}
	}

}

class IndependentListener implements ActionListener{
	NullLayout nl;
	IndependentListener(NullLayout n){
		nl = n;
	}
	@Override
	public void actionPerformed(ActionEvent e) {
		String s1 = nl.t1.getText();
		String s2 = nl.t2.getText();
		int num1 = Integer.parseInt(s1);
		int num2 = Integer.parseInt(s2);
		int res = num1 + num2;
		nl.t3.setText(String.valueOf(res));
	}
}
