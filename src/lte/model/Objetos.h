#ifndef OBJETOS_H
#define OBJETOS_H

#include <ns3/lte-enb-rrc.h>
#include <ns3/lte-enb-mac.h>

namespace ns3{

class LteEnbRrc;
class LteEnbMac;

class Objetos : public Object
{

public:

	  Objetos (void);

	  /**
	   * Destructor
	   */
	  virtual ~Objetos (void);

	  static TypeId GetTypeId (void);

	void SetLteEnbRrcObject(Ptr<LteEnbRrc> rrc);
	Ptr<LteEnbRrc> GetLteEnbRrcObject(int pos);
//	void SetLteEnbMacObject(Ptr<LteEnbMac> mac);
//	Ptr<LteEnbMac> GetLteEnbMacObject(int pos);

//	  void prueba(void);

	std::vector < Ptr<LteEnbRrc> > m_rrcMap;
//	std::vector < Ptr<LteEnbMac> > m_macMap;



};

}

#endif /* OBJETOS_H */




