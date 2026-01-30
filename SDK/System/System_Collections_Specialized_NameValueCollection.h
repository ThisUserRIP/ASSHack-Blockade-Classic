#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Collections_Specialized_NameObjectCollectionBase.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections { struct IEqualityComparer; };
namespace mscorlib::System { struct DBNull; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "..\mscorlib\System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System::Collections { struct ArrayList; };

namespace System::System::Collections::Specialized
{
	struct NameValueCollection : System::Collections::Specialized::NameObjectCollectionBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::String*>* _all;
		IL2CPP::Array<mscorlib::System::String*>* _allKeys;
		void _ctor();
		void _ctor(int32_t capacity, mscorlib::System::Collections::IEqualityComparer* equalityComparer);
		void _ctor(mscorlib::System::DBNull* dummy);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void InvalidateCachedArrays();
		static mscorlib::System::String* GetAsOneString(mscorlib::System::Collections::ArrayList* list);
		static IL2CPP::Array<mscorlib::System::String*>* GetAsStringArray(mscorlib::System::Collections::ArrayList* list);
		void Add(mscorlib::System::String* name, mscorlib::System::String* value);
		mscorlib::System::String* Get(mscorlib::System::String* name);
		IL2CPP::Array<mscorlib::System::String*>* GetValues(mscorlib::System::String* name);
		void Set(mscorlib::System::String* name, mscorlib::System::String* value);
		void Remove(mscorlib::System::String* name);
		mscorlib::System::String* get_Item(mscorlib::System::String* name);
		void set_Item(mscorlib::System::String* name, mscorlib::System::String* value);
		mscorlib::System::String* Get(int32_t index);
		mscorlib::System::String* GetKey(int32_t index);
		mscorlib::System::String* get_Item(int32_t index);
		IL2CPP::Array<mscorlib::System::String*>* get_AllKeys();
	};
}

