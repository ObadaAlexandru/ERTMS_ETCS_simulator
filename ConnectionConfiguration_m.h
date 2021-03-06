//
// Generated file, do not edit! Created by opp_msgc 4.2 from ConnectionConfiguration.msg.
//

#ifndef _CONNECTIONCONFIGURATION_M_H_
#define _CONNECTIONCONFIGURATION_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0402
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif



/**
 * Class generated from <tt>ConnectionConfiguration.msg</tt> by opp_msgc.
 * <pre>
 * message ConnectionConfiguration
 * {
 *     int idServingSrb;
 * }
 * </pre>
 */
class ConnectionConfiguration : public ::cMessage
{
  protected:
    int idServingSrb_var;

  private:
    void copy(const ConnectionConfiguration& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ConnectionConfiguration&);

  public:
    ConnectionConfiguration(const char *name=NULL, int kind=0);
    ConnectionConfiguration(const ConnectionConfiguration& other);
    virtual ~ConnectionConfiguration();
    ConnectionConfiguration& operator=(const ConnectionConfiguration& other);
    virtual ConnectionConfiguration *dup() const {return new ConnectionConfiguration(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getIdServingSrb() const;
    virtual void setIdServingSrb(int idServingSrb);
};

inline void doPacking(cCommBuffer *b, ConnectionConfiguration& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, ConnectionConfiguration& obj) {obj.parsimUnpack(b);}


#endif // _CONNECTIONCONFIGURATION_M_H_
