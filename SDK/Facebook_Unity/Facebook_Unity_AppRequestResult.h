#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Facebook_Unity_ResultBase.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Facebook_Unity::Facebook::Unity { struct ResultContainer; };

namespace Facebook_Unity::Facebook::Unity
{
	struct AppRequestResult : Facebook_Unity::Facebook::Unity::ResultBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _RequestID_k__BackingField;
		mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* _To_k__BackingField;
		void _ctor(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		mscorlib::System::String* get_RequestID();
		void set_RequestID(mscorlib::System::String* value);
		mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* get_To();
		void set_To(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* value);
		mscorlib::System::String* ToString();
	};
}

