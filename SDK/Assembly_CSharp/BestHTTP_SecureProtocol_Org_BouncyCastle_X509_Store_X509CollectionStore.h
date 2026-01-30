#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct ICollection; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { struct IX509Selector; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store
{
	struct X509CollectionStore : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::ICollection* _local;
		void _ctor(mscorlib::System::Collections::ICollection* collection);
		mscorlib::System::Collections::ICollection* GetMatches(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Selector* selector);
	};
}

