#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Facebook_Unity::Facebook::Unity
{
	struct ResultContainer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _RawResult_k__BackingField;
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* _ResultDictionary_k__BackingField;
		struct StaticFields
		{
			mscorlib::System::String* CanvasResponseKey;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* dictionary);
		void _ctor(mscorlib::System::String* result);
		mscorlib::System::String* get_RawResult();
		void set_RawResult(mscorlib::System::String* value);
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* get_ResultDictionary();
		void set_ResultDictionary(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* value);
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* GetWebFormattedResponseDictionary(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* resultDictionary);
	};
}

