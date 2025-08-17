package gui;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
public class ItemEventListenerTest extends JFrame {//implements ItemListener{
	JComboBox<String> cb;
	JLabel l;
	JTextArea t;
	JCheckBox ch1,ch2;
	ItemEventListenerTest(){
		String[] c = {"Eth","Eng","Fra","Eri","Sud"};
		cb = new JComboBox<>(c);
		
		l = new JLabel("Language");
		t = new JTextArea(10,20);
		ch1 = new JCheckBox("Java");
		ch2 = new JCheckBox("DB");
		JPanel jp1 = new JPanel();
		jp1.add(ch1);
		jp1.add(ch2);
		add(jp1);
		add(cb,BorderLayout.NORTH);
		JPanel jp = new JPanel();
		jp.add(l);
		jp.add(t);
		add(jp,BorderLayout.SOUTH);
		Listener li = new Listener();
		cb.addItemListener(li);
		ch1.addItemListener(li);
		ch2.addItemListener(li);
		
		pack();
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setVisible(true);
	}
	public static void main(String[] args) {
		new ItemEventListenerTest();
	}
	class Listener implements ItemListener{
		@Override
		public void itemStateChanged(ItemEvent e) {
			if(e.getStateChange() == ItemEvent.SELECTED) {
				if(e.getSource()==cb) {
					l.setText("Language");
					if((String)e.getItem() == "Eth")
						t.append("Amharic\n");
					else if((String)e.getItem() == "Eng")
						t.append("English\n");
					else if((String)e.getItem() == "Fra")
						t.append("French\n");
					else if((String)e.getItem() == "Eri")
						t.append("Tigrigna\n");
					else if((String)e.getItem() == "Sud")	
						t.append("Arabic\n");
				}
				else if(e.getSource()==ch1 || e.getSource()==ch2) {
					l.setText("Courses");
					if(ch1.isSelected() && ch2.isSelected()) {
						t.append("Java & Database\n");
					}
					else if(ch1.isSelected()) {
						t.append("OOP\n");
					}
					else if(ch2.isSelected()) {
						t.append("Database\n");
					}
				}
			}
		}
	}
}
