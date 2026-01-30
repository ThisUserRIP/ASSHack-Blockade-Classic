#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::IO { struct TextReader; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem { struct PemObject; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem
{
	struct PemReader : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::TextReader* reader;
		struct StaticFields
		{
			mscorlib::System::String* BeginString;
			mscorlib::System::String* EndString;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::IO::TextReader* reader);
		mscorlib::System::IO::TextReader* get_Reader();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject* ReadPemObject();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject* LoadObject(mscorlib::System::String* type);
	};
}

