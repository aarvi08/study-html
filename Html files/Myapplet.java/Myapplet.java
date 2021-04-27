import java.applet.*;
import java.awt.*;
public class Myapplet extends Applet
{
    public void paint(Graphics mygraph)
    {
        mygraph.drawString("I am working in Java.");
        mygraph.drawRect(50, 50, 100, 100);
    }
}