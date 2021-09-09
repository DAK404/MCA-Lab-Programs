import java.applet.*;
import java.awt.*;
import java.io.*;
public class apple extends Applet
{
  public void paint(Graphics g)
{
g.drawString("Welcum" , 100,75);
g.drawRect(10,60,40,30);
g.setColor(Color.blue);
g.fillRect(60,10, 30, 80);
g.drawOval(230,10,200,150);
g.setColor(Color.red);
g.fillRect(250,25, 100, 100);
}
}
