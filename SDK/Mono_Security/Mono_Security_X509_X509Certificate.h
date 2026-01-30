#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Mono_Security::Mono::Security { struct ASN1; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Security::Cryptography { struct RSA; };
namespace mscorlib::System::Security::Cryptography { struct DSA; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Mono_Security::Mono::Security::X509 { struct X509ExtensionCollection; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "..\mscorlib\System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };

namespace Mono_Security::Mono::Security::X509
{
	struct X509Certificate : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Mono_Security::Mono::Security::ASN1* decoder;
		IL2CPP::Array<uint8_t>* m_encodedcert;
		mscorlib::System::DateTime m_from;
		mscorlib::System::DateTime m_until;
		Mono_Security::Mono::Security::ASN1* issuer;
		mscorlib::System::String* m_issuername;
		mscorlib::System::String* m_keyalgo;
		IL2CPP::Array<uint8_t>* m_keyalgoparams;
		Mono_Security::Mono::Security::ASN1* subject;
		mscorlib::System::String* m_subject;
		IL2CPP::Array<uint8_t>* m_publickey;
		IL2CPP::Array<uint8_t>* signature;
		mscorlib::System::String* m_signaturealgo;
		IL2CPP::Array<uint8_t>* m_signaturealgoparams;
		mscorlib::System::Security::Cryptography::RSA* _rsa;
		mscorlib::System::Security::Cryptography::DSA* _dsa;
		int32_t version;
		IL2CPP::Array<uint8_t>* serialnumber;
		IL2CPP::Array<uint8_t>* issuerUniqueID;
		IL2CPP::Array<uint8_t>* subjectUniqueID;
		Mono_Security::Mono::Security::X509::X509ExtensionCollection* extensions;
		struct StaticFields
		{
			mscorlib::System::String* encoding_error;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Parse(IL2CPP::Array<uint8_t>* data);
		void _ctor(IL2CPP::Array<uint8_t>* data);
		IL2CPP::Array<uint8_t>* GetUnsignedBigInteger(IL2CPP::Array<uint8_t>* integer);
		mscorlib::System::Security::Cryptography::DSA* get_DSA();
		void set_DSA(mscorlib::System::Security::Cryptography::DSA* value);
		mscorlib::System::String* get_IssuerName();
		mscorlib::System::String* get_KeyAlgorithm();
		IL2CPP::Array<uint8_t>* get_KeyAlgorithmParameters();
		IL2CPP::Array<uint8_t>* get_PublicKey();
		mscorlib::System::Security::Cryptography::RSA* get_RSA();
		void set_RSA(mscorlib::System::Security::Cryptography::RSA* value);
		IL2CPP::Array<uint8_t>* get_RawData();
		IL2CPP::Array<uint8_t>* get_SerialNumber();
		mscorlib::System::String* get_SignatureAlgorithm();
		mscorlib::System::String* get_SubjectName();
		mscorlib::System::DateTime get_ValidFrom();
		mscorlib::System::DateTime get_ValidUntil();
		int32_t get_Version();
		Mono_Security::Mono::Security::ASN1* GetIssuerName();
		Mono_Security::Mono::Security::ASN1* GetSubjectName();
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		static IL2CPP::Array<uint8_t>* PEM(mscorlib::System::String* type, IL2CPP::Array<uint8_t>* data);
		static void _cctor();
	};
}

