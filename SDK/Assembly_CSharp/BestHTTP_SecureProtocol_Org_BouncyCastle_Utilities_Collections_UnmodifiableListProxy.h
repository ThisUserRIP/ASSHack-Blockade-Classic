#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Utilities_Collections_UnmodifiableList.h"
namespace mscorlib::System::Collections { struct IList; };
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
	struct UnmodifiableListProxy : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::UnmodifiableList
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::IList* l;
		void _ctor(mscorlib::System::Collections::IList* l);
		bool Contains(mscorlib::System::Object* o);
		void CopyTo(mscorlib::System::Array* array, int32_t index);
		int32_t get_Count();
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
		int32_t IndexOf(mscorlib::System::Object* o);
		bool get_IsFixedSize();
		bool get_IsSynchronized();
		mscorlib::System::Object* get_SyncRoot();
		mscorlib::System::Object* GetValue(int32_t i);
	};
}

