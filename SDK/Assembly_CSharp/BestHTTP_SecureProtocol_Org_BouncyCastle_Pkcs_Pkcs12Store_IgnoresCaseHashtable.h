#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Pkcs_Pkcs12Store.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs { struct Pkcs12Store; };
namespace mscorlib::System::Collections { struct IDictionary; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace mscorlib::System::Collections { struct ICollection; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs
{
	struct Pkcs12Store_IgnoresCaseHashtable : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::IDictionary* orig;
		mscorlib::System::Collections::IDictionary* keys;
		void Clear();
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
		mscorlib::System::Collections::ICollection* get_Keys();
		mscorlib::System::Object* Remove(mscorlib::System::String* alias);
		mscorlib::System::Object* get_Item(mscorlib::System::String* alias);
		void set_Item(mscorlib::System::String* alias, mscorlib::System::Object* value);
		mscorlib::System::Collections::ICollection* get_Values();
		void _ctor();
	};
}

