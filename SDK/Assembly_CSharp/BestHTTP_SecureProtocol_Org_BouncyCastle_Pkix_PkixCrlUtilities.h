#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections { struct ISet; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { struct X509CrlStoreSelector; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { struct PkixParameters; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
namespace mscorlib::System::Collections { struct ICollection; };
namespace mscorlib::System::Collections { struct IList; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix
{
	struct PkixCrlUtilities : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* FindCrls(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* crlselect, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* paramsPkix, mscorlib::System::DateTime currentDate);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* FindCrls(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* crlselect, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* paramsPkix);
		mscorlib::System::Collections::ICollection* FindCrls(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* crlSelect, mscorlib::System::Collections::IList* crlStores);
		void _ctor();
	};
}

