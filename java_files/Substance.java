
public class Substance
{
  private double temperature;

  //constructor
  public Substance (double tem)
  {
    temperature = tem;
  }

  public void setTemprature (double tem)
  {
    temperature = tem;
  }

  public double getTemperature ()
  {
    return temperature;
  }

  /*
  * check what will happen to the Substance at a given temperature
  */

  public boolean isEthyFreezing()
  {
    return (temperature <= -173 ? true : false);
  }

  public boolean isEthyBoiling()
  {
    return (temperature >= 172 ? true : false);
  }

  public boolean isOxygenFreezing()
  {
    return (temperature <= -362 ? true : false);
  }

  public boolean isOxygenBoiling()
  {
    return (temperature >= -306 ? true : false);
  }

  public boolean isWaterFreezing()
  {
    return (temperature <= 32 ? true : false);
  }

  public boolean isWaterBoiling()
  {
    return (temperature >= 212 ? true : false);
  }


}