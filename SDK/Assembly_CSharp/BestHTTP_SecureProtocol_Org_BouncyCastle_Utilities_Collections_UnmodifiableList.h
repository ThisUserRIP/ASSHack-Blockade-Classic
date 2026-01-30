#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Array; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections
{
	struct UnmodifiableList : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		int32_t Add(mscorlib::System::Object* o);
		void Clear();
		bool Contains(mscorlib::System::Object* o);
		void CopyTo(mscorlib::System::Array* array, int32_t index);
		int32_t get_Count();
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
		int32_t IndexOf(mscorlib::System::Object* o);
		void Insert(int32_t i, mscorlib::System::Object* o);
		bool get_IsFixedSize();
		bool get_IsReadOnly();
		bool get_IsSynchronized();
		void Remove(mscorlib::System::Object* o);
		void RemoveAt(int32_t i);
		mscorlib::System::Object* get_SyncRoot();
		mscorlib::System::Object* get_Item(int32_t i);
		void set_Item(int32_t i, mscorlib::System::Object* value);
		mscorlib::System::Object* GetValue(int32_t i);
	};
}

