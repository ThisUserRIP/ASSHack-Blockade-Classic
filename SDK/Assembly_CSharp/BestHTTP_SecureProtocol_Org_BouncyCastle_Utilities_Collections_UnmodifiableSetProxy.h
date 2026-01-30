#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Utilities_Collections_UnmodifiableSet.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections { struct ISet; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct Array; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections
{
	struct UnmodifiableSetProxy : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::UnmodifiableSet
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* s;
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* s);
		bool Contains(mscorlib::System::Object* o);
		void CopyTo(mscorlib::System::Array* array, int32_t index);
		int32_t get_Count();
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
		bool get_IsEmpty();
		bool get_IsFixedSize();
		bool get_IsSynchronized();
		mscorlib::System::Object* get_SyncRoot();
	};
}

