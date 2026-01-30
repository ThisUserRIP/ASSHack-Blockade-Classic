#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Security_Cryptography_X509Certificates_X509Certificate.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509Certificate2Impl; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "..\mscorlib\System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
namespace mscorlib::System::Security::Cryptography { struct AsymmetricAlgorithm; };
namespace System::System::Security::Cryptography::X509Certificates { struct PublicKey; };
namespace System::System::Security::Cryptography { struct Oid; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Security_Cryptography_X509Certificates_X509KeyStorageFlags.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Text { struct StringBuilder; };

namespace System::System::Security::Cryptography::X509Certificates
{
	struct X509Certificate2 : mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* friendlyName;
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* signedData;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		System::Security::Cryptography::X509Certificates::X509Certificate2Impl* get_Impl();
		void _ctor();
		void _ctor(IL2CPP::Array<uint8_t>* rawData);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		mscorlib::System::DateTime get_NotAfter();
		mscorlib::System::DateTime get_NotBefore();
		mscorlib::System::Security::Cryptography::AsymmetricAlgorithm* get_PrivateKey();
		System::Security::Cryptography::X509Certificates::PublicKey* get_PublicKey();
		mscorlib::System::String* get_SerialNumber();
		System::Security::Cryptography::Oid* get_SignatureAlgorithm();
		mscorlib::System::String* get_Thumbprint();
		int32_t get_Version();
		void Import(IL2CPP::Array<uint8_t>* rawData, mscorlib::System::String* password, mscorlib::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);
		void Reset();
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(bool verbose);
		static void AppendBuffer(mscorlib::System::Text::StringBuilder* sb, IL2CPP::Array<uint8_t>* buffer);
		static void _cctor();
	};
}

