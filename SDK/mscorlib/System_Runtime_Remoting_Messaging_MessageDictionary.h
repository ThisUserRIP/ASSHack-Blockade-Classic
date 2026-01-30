#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct IDictionary; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMethodMessage; };
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections { struct ICollection; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Array; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace mscorlib::System::Collections { struct IDictionaryEnumerator; };

namespace mscorlib::System::Runtime::Remoting::Messaging
{
	struct MessageDictionary : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::IDictionary* _internalProperties;
		mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage* _message;
		IL2CPP::Array<mscorlib::System::String*>* _methodKeys;
		bool _ownProperties;
		void _ctor(mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage* message);
		bool HasUserData();
		mscorlib::System::Collections::IDictionary* get_InternalDictionary();
		void set_MethodKeys(IL2CPP::Array<mscorlib::System::String*>* value);
		mscorlib::System::Collections::IDictionary* AllocInternalProperties();
		mscorlib::System::Collections::IDictionary* GetInternalProperties();
		bool IsOverridenKey(mscorlib::System::String* key);
		bool get_IsFixedSize();
		bool get_IsReadOnly();
		mscorlib::System::Object* get_Item(mscorlib::System::Object* key);
		void set_Item(mscorlib::System::Object* key, mscorlib::System::Object* value);
		mscorlib::System::Object* GetMethodProperty(mscorlib::System::String* key);
		void SetMethodProperty(mscorlib::System::String* key, mscorlib::System::Object* value);
		mscorlib::System::Collections::ICollection* get_Keys();
		mscorlib::System::Collections::ICollection* get_Values();
		void Add(mscorlib::System::Object* key, mscorlib::System::Object* value);
		void Clear();
		bool Contains(mscorlib::System::Object* key);
		void Remove(mscorlib::System::Object* key);
		int32_t get_Count();
		bool get_IsSynchronized();
		mscorlib::System::Object* get_SyncRoot();
		void CopyTo(mscorlib::System::Array* array, int32_t index);
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
		mscorlib::System::Collections::IDictionaryEnumerator* GetEnumerator();
	};
}

