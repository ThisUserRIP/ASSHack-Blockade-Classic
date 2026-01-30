#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Security::Cryptography::X509Certificates
{
	struct X509CertificateImpl : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* cachedCertificateHash;
		bool get_IsValid();
		void ThrowIfContextInvalid();
		mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Clone();
		mscorlib::System::String* GetIssuerName(bool legacyV1Mode);
		mscorlib::System::String* GetSubjectName(bool legacyV1Mode);
		IL2CPP::Array<uint8_t>* GetRawCertData();
		mscorlib::System::DateTime GetValidFrom();
		mscorlib::System::DateTime GetValidUntil();
		IL2CPP::Array<uint8_t>* GetCertHash();
		IL2CPP::Array<uint8_t>* GetCertHash(bool lazy);
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl* other, bool& result);
		IL2CPP::Array<uint8_t>* GetSerialNumber();
		mscorlib::System::String* ToString(bool full);
		bool Equals(mscorlib::System::Object* obj);
		void Dispose();
		void Dispose(bool disposing);
		void Finalize();
		void _ctor();
	};
}

