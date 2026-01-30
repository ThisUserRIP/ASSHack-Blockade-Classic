#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Facebook_Unity_ResultBase.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Facebook_Unity::Facebook::Unity { struct ResultContainer; };

namespace Facebook_Unity::Facebook::Unity
{
	struct PayloadResult : Facebook_Unity::Facebook::Unity::ResultBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* _Payload_k__BackingField;
		void _ctor(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* get_Payload();
		void set_Payload(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* value);
		mscorlib::System::String* ToString();
	};
}

