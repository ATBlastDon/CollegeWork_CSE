import java.applet.*;
import java.awt.*;
/*
<applet code=FaceApplet.class width=500 height=400>
</applet>
*/
public class FaceApplet extends Applet
{
	public void paint(Graphics g)
	{
		g.setColor(Color.red);	
		g.drawOval(20,40,250,250);
		g.fillOval(50,100,50,70);
		g.fillOval(185,100,50,70);
		g.drawLine(138,160,138,210);
		g.drawLine(138,210,155,210);
		g.drawArc(95,156,100,100,180,180);
	}
}
