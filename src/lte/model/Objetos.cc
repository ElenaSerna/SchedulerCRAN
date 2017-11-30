#include <ns3/Objetos.h>
#include <ns3/lte-enb-rrc.h>
#include <ns3/lte-enb-mac.h>

namespace ns3{
NS_LOG_COMPONENT_DEFINE ("Objetos");

Objetos::Objetos ()
{

}

Objetos::~Objetos ()
{
}


TypeId
Objetos::GetTypeId (void) // Permite registrar este tipo (tid: schedulerDRANMac)
{
  static TypeId tid = TypeId ("ns3::Objetos")
	.SetParent<Object> ()
    .SetGroupName("Lte")
    .AddConstructor<Objetos> ()
  ;
  return tid;
}



void
Objetos::SetLteEnbRrcObject (Ptr<LteEnbRrc> rrc)
{
	m_rrcMap.push_back(rrc);

}

Ptr<LteEnbRrc>
Objetos::GetLteEnbRrcObject (int pos)
{
	return m_rrcMap.at(pos);

}

//void
//Objetos::SetLteEnbMacObject (Ptr<LteEnbMac> mac)
//{
//	m_rrcMap.push_back(mac);
//
//}
//
//
//Ptr<LteEnbMac>
//Objetos::GetLteEnbMacObject (int pos)
//{
//	return m_macMap.at(pos);
//
//}

//void
//Objetos::prueba(void)
//{
//	std::cout << "Dentro de Objetos" << std::endl;
//}

}
