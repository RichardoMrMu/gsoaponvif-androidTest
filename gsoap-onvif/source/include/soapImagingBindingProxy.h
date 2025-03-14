#ifndef soapImagingBindingProxy_H
#define soapImagingBindingProxy_H
#include "soapH.h"

class SOAP_CMAC ImagingBindingProxy
{ public:
	struct soap *soap;
	bool own;
	/// Endpoint URL of service 'ImagingBindingProxy' (change as needed)
	const char *soap_endpoint;
	/// Constructor
	ImagingBindingProxy();
	/// Constructor to use/share an engine state
	ImagingBindingProxy(struct soap*);
	/// Constructor with endpoint URL
	ImagingBindingProxy(const char *url);
	/// Constructor with engine input+output mode control
	ImagingBindingProxy(soap_mode iomode);
	/// Constructor with URL and input+output mode control
	ImagingBindingProxy(const char *url, soap_mode iomode);
	/// Constructor with engine input and output mode control
	ImagingBindingProxy(soap_mode imode, soap_mode omode);
	/// Destructor frees deserialized data
	virtual	~ImagingBindingProxy();
	/// Initializer used by constructors
	virtual	void ImagingBindingProxy_init(soap_mode imode, soap_mode omode);
	/// Delete all deserialized data (with soap_destroy and soap_end)
	virtual	void destroy();
	/// Delete all deserialized data and reset to default
	virtual	void reset();
	/// Disables and removes SOAP Header from message
	virtual	void soap_noheader();
	/// Put SOAP Header in message
	virtual	void soap_header(char *wsa__MessageID, struct wsa__Relationship *wsa__RelatesTo, struct wsa__EndpointReferenceType *wsa__From, struct wsa__EndpointReferenceType *wsa__ReplyTo, struct wsa__EndpointReferenceType *wsa__FaultTo, char *wsa__To, char *wsa__Action, struct wsdd__AppSequenceType *wsdd__AppSequence, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct wsrm__SequenceType *wsrm__Sequence, int __sizeAckRequested, struct wsrm__AckRequestedType *wsrm__AckRequested, int __sizeSequenceAcknowledgement, struct _wsrm__SequenceAcknowledgement *wsrm__SequenceAcknowledgement, struct wsrm__SequenceFaultType *wsrm__SequenceFault, struct _wsse__Security *wsse__Security);
	/// Get SOAP Header structure (NULL when absent)
	virtual	const SOAP_ENV__Header *soap_header();
	/// Get SOAP Fault structure (NULL when absent)
	/*virtual	const SOAP_ENV__Fault *soap_fault();*/
	/// Get SOAP Fault string (NULL when absent)
	virtual	const char *soap_fault_string();
	/// Get SOAP Fault detail as string (NULL when absent)
	virtual	const char *soap_fault_detail();
	/// Close connection (normally automatic, except for send_X ops)
	virtual	int soap_close_socket();
	/// Force close connection (can kill a thread blocked on IO)
	virtual	int soap_force_close_socket();
	/// Print fault
	virtual	void soap_print_fault(FILE*);
#ifndef WITH_LEAN
	/// Print fault to stream
#ifndef WITH_COMPAT
	virtual	void soap_stream_fault(std::ostream&);
#endif

	/// Put fault into buffer
	virtual	char *soap_sprint_fault(char *buf, size_t len);
#endif

	/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
	virtual	int GetServiceCapabilities(_timg__GetServiceCapabilities *timg__GetServiceCapabilities, _timg__GetServiceCapabilitiesResponse *timg__GetServiceCapabilitiesResponse) { return this->GetServiceCapabilities(NULL, NULL, timg__GetServiceCapabilities, timg__GetServiceCapabilitiesResponse); }
	virtual	int GetServiceCapabilities(const char *endpoint, const char *soap_action, _timg__GetServiceCapabilities *timg__GetServiceCapabilities, _timg__GetServiceCapabilitiesResponse *timg__GetServiceCapabilitiesResponse);

	/// Web service operation 'GetImagingSettings' (returns error code or SOAP_OK)
	virtual	int GetImagingSettings(_timg__GetImagingSettings *timg__GetImagingSettings, _timg__GetImagingSettingsResponse *timg__GetImagingSettingsResponse) { return this->GetImagingSettings(NULL, NULL, timg__GetImagingSettings, timg__GetImagingSettingsResponse); }
	virtual	int GetImagingSettings(const char *endpoint, const char *soap_action, _timg__GetImagingSettings *timg__GetImagingSettings, _timg__GetImagingSettingsResponse *timg__GetImagingSettingsResponse);

	/// Web service operation 'SetImagingSettings' (returns error code or SOAP_OK)
	virtual	int SetImagingSettings(_timg__SetImagingSettings *timg__SetImagingSettings, _timg__SetImagingSettingsResponse *timg__SetImagingSettingsResponse) { return this->SetImagingSettings(NULL, NULL, timg__SetImagingSettings, timg__SetImagingSettingsResponse); }
	virtual	int SetImagingSettings(const char *endpoint, const char *soap_action, _timg__SetImagingSettings *timg__SetImagingSettings, _timg__SetImagingSettingsResponse *timg__SetImagingSettingsResponse);

	/// Web service operation 'GetOptions' (returns error code or SOAP_OK)
	virtual	int GetOptions(_timg__GetOptions *timg__GetOptions, _timg__GetOptionsResponse *timg__GetOptionsResponse) { return this->GetOptions(NULL, NULL, timg__GetOptions, timg__GetOptionsResponse); }
	virtual	int GetOptions(const char *endpoint, const char *soap_action, _timg__GetOptions *timg__GetOptions, _timg__GetOptionsResponse *timg__GetOptionsResponse);

	/// Web service operation 'Move' (returns error code or SOAP_OK)
	virtual	int Move(_timg__Move *timg__Move, _timg__MoveResponse *timg__MoveResponse) { return this->Move(NULL, NULL, timg__Move, timg__MoveResponse); }
	virtual	int Move(const char *endpoint, const char *soap_action, _timg__Move *timg__Move, _timg__MoveResponse *timg__MoveResponse);

	/// Web service operation 'Stop' (returns error code or SOAP_OK)
	virtual	int Stop(_timg__Stop *timg__Stop, _timg__StopResponse *timg__StopResponse) { return this->Stop(NULL, NULL, timg__Stop, timg__StopResponse); }
	virtual	int Stop(const char *endpoint, const char *soap_action, _timg__Stop *timg__Stop, _timg__StopResponse *timg__StopResponse);

	/// Web service operation 'GetStatus' (returns error code or SOAP_OK)
	virtual	int GetStatus(_timg__GetStatus *timg__GetStatus, _timg__GetStatusResponse *timg__GetStatusResponse) { return this->GetStatus(NULL, NULL, timg__GetStatus, timg__GetStatusResponse); }
	virtual	int GetStatus(const char *endpoint, const char *soap_action, _timg__GetStatus *timg__GetStatus, _timg__GetStatusResponse *timg__GetStatusResponse);

	/// Web service operation 'GetMoveOptions' (returns error code or SOAP_OK)
	virtual	int GetMoveOptions(_timg__GetMoveOptions *timg__GetMoveOptions, _timg__GetMoveOptionsResponse *timg__GetMoveOptionsResponse) { return this->GetMoveOptions(NULL, NULL, timg__GetMoveOptions, timg__GetMoveOptionsResponse); }
	virtual	int GetMoveOptions(const char *endpoint, const char *soap_action, _timg__GetMoveOptions *timg__GetMoveOptions, _timg__GetMoveOptionsResponse *timg__GetMoveOptionsResponse);
};
#endif
