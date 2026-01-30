#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections { struct IEnumerable; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Array; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections
{
	struct UnmodifiableSet : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		void Add(mscorlib::System::Object* o);
		void AddAll(mscorlib::System::Collections::IEnumerable* e);
		void Clear();
		bool Contains(mscorlib::System::Object* o);
		void CopyTo(mscorlib::System::Array* array, int32_t index);
		int32_t get_Count();
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
		bool get_IsEmpty();
		bool get_IsFixedSize();
		bool get_IsReadOnly();
		bool get_IsSynchronized();
		mscorlib::System::Object* get_SyncRoot();
		void Remove(mscorlib::System::Object* o);
		void RemoveAll(mscorlib::System::Collections::IEnumerable* e);
	};
}

