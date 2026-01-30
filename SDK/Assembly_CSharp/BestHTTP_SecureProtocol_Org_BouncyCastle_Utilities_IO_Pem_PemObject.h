#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections { struct IList; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem
{
	struct PemObject : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* type;
		mscorlib::System::Collections::IList* headers;
		IL2CPP::Array<uint8_t>* content;
		void _ctor(mscorlib::System::String* type, IL2CPP::Array<uint8_t>* content);
		void _ctor(mscorlib::System::String* type, mscorlib::System::Collections::IList* headers, IL2CPP::Array<uint8_t>* content);
		mscorlib::System::String* get_Type();
		mscorlib::System::Collections::IList* get_Headers();
		IL2CPP::Array<uint8_t>* get_Content();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject* Generate();
	};
}

