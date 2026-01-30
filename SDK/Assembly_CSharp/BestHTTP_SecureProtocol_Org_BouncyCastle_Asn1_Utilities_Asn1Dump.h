#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1Object; };
namespace mscorlib::System::Text { struct StringBuilder; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct DerApplicationSpecific; };
namespace mscorlib::System { struct Object; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1Encodable; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Utilities
{
	struct Asn1Dump : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* NewLine;
			mscorlib::System::String* Tab;
			int32_t SampleSize;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static void AsString(mscorlib::System::String* indent, bool verbose, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* obj, mscorlib::System::Text::StringBuilder* buf);
		static mscorlib::System::String* outputApplicationSpecific(mscorlib::System::String* type, mscorlib::System::String* indent, bool verbose, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerApplicationSpecific* app);
		static mscorlib::System::String* DumpAsString(mscorlib::System::Object* obj);
		static mscorlib::System::String* DumpAsString(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* obj);
		static mscorlib::System::String* DumpAsString(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* obj, bool verbose);
		static mscorlib::System::String* dumpBinaryDataAsString(mscorlib::System::String* indent, IL2CPP::Array<uint8_t>* bytes);
		static mscorlib::System::String* calculateAscString(IL2CPP::Array<uint8_t>* bytes, int32_t off, int32_t len);
		static void _cctor();
	};
}

