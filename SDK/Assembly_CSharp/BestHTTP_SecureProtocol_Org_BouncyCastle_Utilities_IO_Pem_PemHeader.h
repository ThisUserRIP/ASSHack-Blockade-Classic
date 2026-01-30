#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem
{
	struct PemHeader : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* name;
		mscorlib::System::String* val;
		void _ctor(mscorlib::System::String* name, mscorlib::System::String* val);
		mscorlib::System::String* get_Name();
		mscorlib::System::String* get_Value();
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode(mscorlib::System::String* s);
	};
}

