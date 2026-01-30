#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Security::Cryptography::X509Certificates { struct X509CertificateImpl; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System { struct Object; };
#include "System_Security_Cryptography_X509Certificates_X509KeyStorageFlags.h"

namespace mscorlib::System::Security::Cryptography::X509Certificates
{
	struct X509Certificate : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl;
		bool hideDates;
		mscorlib::System::String* issuer_name;
		mscorlib::System::String* subject_name;
		void _ctor(IL2CPP::Array<uint8_t>* data, bool dates);
		void _ctor(IL2CPP::Array<uint8_t>* data);
		void _ctor(mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl);
		void ImportHandle(mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl);
		mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl* get_Impl();
		bool get_IsValid();
		bool Equals(mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* other);
		IL2CPP::Array<uint8_t>* GetCertHash();
		mscorlib::System::String* GetCertHashString();
		int32_t GetHashCode();
		IL2CPP::Array<uint8_t>* GetRawCertData();
		IL2CPP::Array<uint8_t>* GetSerialNumber();
		mscorlib::System::String* GetSerialNumberString();
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(bool fVerbose);
		void _ctor();
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		mscorlib::System::String* get_Issuer();
		mscorlib::System::String* get_Subject();
		bool Equals(mscorlib::System::Object* obj);
		void Import(IL2CPP::Array<uint8_t>* rawData, mscorlib::System::String* password, mscorlib::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);
		void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(mscorlib::System::Object* sender);
		void System_Runtime_Serialization_ISerializable_GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void Dispose();
		void Dispose(bool disposing);
		void Reset();
	};
}

