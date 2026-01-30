#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Utilities_Collections_UnmodifiableDictionary.h"
namespace mscorlib::System::Collections { struct IDictionary; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct Array; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections { struct IDictionaryEnumerator; };
namespace mscorlib::System::Collections { struct ICollection; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections
{
	struct UnmodifiableDictionaryProxy : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::UnmodifiableDictionary
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::IDictionary* d;
		void _ctor(mscorlib::System::Collections::IDictionary* d);
		bool Contains(mscorlib::System::Object* k);
		void CopyTo(mscorlib::System::Array* array, int32_t index);
		int32_t get_Count();
		mscorlib::System::Collections::IDictionaryEnumerator* GetEnumerator();
		bool get_IsFixedSize();
		bool get_IsSynchronized();
		mscorlib::System::Object* get_SyncRoot();
		mscorlib::System::Collections::ICollection* get_Keys();
		mscorlib::System::Collections::ICollection* get_Values();
		mscorlib::System::Object* GetValue(mscorlib::System::Object* k);
	};
}

