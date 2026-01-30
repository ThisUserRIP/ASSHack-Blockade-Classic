#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct IDictionary; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct HeartbeatExtension; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct ServerNameList; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct CertificateStatusRequest; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct TlsExtensionsUtilities : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::Collections::IDictionary* EnsureExtensionsInitialised(mscorlib::System::Collections::IDictionary* extensions);
		static void AddClientCertificateTypeExtensionClient(mscorlib::System::Collections::IDictionary* extensions, IL2CPP::Array<uint8_t>* certificateTypes);
		static void AddClientCertificateTypeExtensionServer(mscorlib::System::Collections::IDictionary* extensions, uint8_t certificateType);
		static void AddEncryptThenMacExtension(mscorlib::System::Collections::IDictionary* extensions);
		static void AddExtendedMasterSecretExtension(mscorlib::System::Collections::IDictionary* extensions);
		static void AddHeartbeatExtension(mscorlib::System::Collections::IDictionary* extensions, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension* heartbeatExtension);
		static void AddMaxFragmentLengthExtension(mscorlib::System::Collections::IDictionary* extensions, uint8_t maxFragmentLength);
		static void AddPaddingExtension(mscorlib::System::Collections::IDictionary* extensions, int32_t dataLength);
		static void AddServerCertificateTypeExtensionClient(mscorlib::System::Collections::IDictionary* extensions, IL2CPP::Array<uint8_t>* certificateTypes);
		static void AddServerCertificateTypeExtensionServer(mscorlib::System::Collections::IDictionary* extensions, uint8_t certificateType);
		static void AddServerNameExtension(mscorlib::System::Collections::IDictionary* extensions, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ServerNameList* serverNameList);
		static void AddStatusRequestExtension(mscorlib::System::Collections::IDictionary* extensions, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest* statusRequest);
		static void AddTruncatedHMacExtension(mscorlib::System::Collections::IDictionary* extensions);
		static IL2CPP::Array<uint8_t>* GetClientCertificateTypeExtensionClient(mscorlib::System::Collections::IDictionary* extensions);
		static int16_t GetClientCertificateTypeExtensionServer(mscorlib::System::Collections::IDictionary* extensions);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension* GetHeartbeatExtension(mscorlib::System::Collections::IDictionary* extensions);
		static int16_t GetMaxFragmentLengthExtension(mscorlib::System::Collections::IDictionary* extensions);
		static int32_t GetPaddingExtension(mscorlib::System::Collections::IDictionary* extensions);
		static IL2CPP::Array<uint8_t>* GetServerCertificateTypeExtensionClient(mscorlib::System::Collections::IDictionary* extensions);
		static int16_t GetServerCertificateTypeExtensionServer(mscorlib::System::Collections::IDictionary* extensions);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ServerNameList* GetServerNameExtension(mscorlib::System::Collections::IDictionary* extensions);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest* GetStatusRequestExtension(mscorlib::System::Collections::IDictionary* extensions);
		static bool HasEncryptThenMacExtension(mscorlib::System::Collections::IDictionary* extensions);
		static bool HasExtendedMasterSecretExtension(mscorlib::System::Collections::IDictionary* extensions);
		static bool HasTruncatedHMacExtension(mscorlib::System::Collections::IDictionary* extensions);
		static IL2CPP::Array<uint8_t>* CreateCertificateTypeExtensionClient(IL2CPP::Array<uint8_t>* certificateTypes);
		static IL2CPP::Array<uint8_t>* CreateCertificateTypeExtensionServer(uint8_t certificateType);
		static IL2CPP::Array<uint8_t>* CreateEmptyExtensionData();
		static IL2CPP::Array<uint8_t>* CreateEncryptThenMacExtension();
		static IL2CPP::Array<uint8_t>* CreateExtendedMasterSecretExtension();
		static IL2CPP::Array<uint8_t>* CreateHeartbeatExtension(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension* heartbeatExtension);
		static IL2CPP::Array<uint8_t>* CreateMaxFragmentLengthExtension(uint8_t maxFragmentLength);
		static IL2CPP::Array<uint8_t>* CreatePaddingExtension(int32_t dataLength);
		static IL2CPP::Array<uint8_t>* CreateServerNameExtension(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ServerNameList* serverNameList);
		static IL2CPP::Array<uint8_t>* CreateStatusRequestExtension(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest* statusRequest);
		static IL2CPP::Array<uint8_t>* CreateTruncatedHMacExtension();
		static bool ReadEmptyExtensionData(IL2CPP::Array<uint8_t>* extensionData);
		static IL2CPP::Array<uint8_t>* ReadCertificateTypeExtensionClient(IL2CPP::Array<uint8_t>* extensionData);
		static uint8_t ReadCertificateTypeExtensionServer(IL2CPP::Array<uint8_t>* extensionData);
		static bool ReadEncryptThenMacExtension(IL2CPP::Array<uint8_t>* extensionData);
		static bool ReadExtendedMasterSecretExtension(IL2CPP::Array<uint8_t>* extensionData);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension* ReadHeartbeatExtension(IL2CPP::Array<uint8_t>* extensionData);
		static uint8_t ReadMaxFragmentLengthExtension(IL2CPP::Array<uint8_t>* extensionData);
		static int32_t ReadPaddingExtension(IL2CPP::Array<uint8_t>* extensionData);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ServerNameList* ReadServerNameExtension(IL2CPP::Array<uint8_t>* extensionData);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateStatusRequest* ReadStatusRequestExtension(IL2CPP::Array<uint8_t>* extensionData);
		static bool ReadTruncatedHMacExtension(IL2CPP::Array<uint8_t>* extensionData);
		void _ctor();
	};
}

