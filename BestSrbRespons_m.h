//
// Generated file, do not edit! Created by opp_msgc 4.2 from BestSrbRespons.msg.
//

#ifndef _BESTSRBRESPONS_M_H_
#define _BESTSRBRESPONS_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0402
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif



/**
 * Class generated from <tt>BestSrbRespons.msg</tt> by opp_msgc.
 * <pre>
 * message BestSrbRespons
 * {
 *     int idBestSrb;
 * }
 * </pre>
 */
class BestSrbRespons : public ::cMessage
{
  protected:
    int idBestSrb_var;

  private:
    void copy(const BestSrbRespons& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const BestSrbRespons&);

  public:
    BestSrbRespons(const char *name=NULL, int kind=0);
    BestSrbRespons(const BestSrbRespons& other);
    virtual ~BestSrbRespons();
    BestSrbRespons& operator=(const BestSrbRespons& other);
    virtual BestSrbRespons *dup() const {return new BestSrbRespons(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getIdBestSrb() const;
    virtual void setIdBestSrb(int idBestSrb);
};

inline void doPacking(cCommBuffer *b, BestSrbRespons& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, BestSrbRespons& obj) {obj.parsimUnpack(b);}


#endif // _BESTSRBRESPONS_M_H_