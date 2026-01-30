#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "LitJson_PropertyMetadata.h"
namespace Assembly_CSharp::LitJson { struct PropertyMetadata; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::LitJson
{
	struct ObjectMetadata
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* element_type;
		bool is_dictionary;
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, Assembly_CSharp::LitJson::PropertyMetadata>* properties;
		mscorlib::System::Type* get_ElementType();
		void set_ElementType(mscorlib::System::Type* value);
		bool get_IsDictionary();
		void set_IsDictionary(bool value);
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, Assembly_CSharp::LitJson::PropertyMetadata>* get_Properties();
		void set_Properties(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, Assembly_CSharp::LitJson::PropertyMetadata>* value);
	};
}

