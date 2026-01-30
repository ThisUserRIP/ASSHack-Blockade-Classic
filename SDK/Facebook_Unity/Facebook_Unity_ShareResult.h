#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Facebook_Unity_ResultBase.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Facebook_Unity::Facebook::Unity { struct ResultContainer; };

namespace Facebook_Unity::Facebook::Unity
{
	struct ShareResult : Facebook_Unity::Facebook::Unity::ResultBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _PostId_k__BackingField;
		void _ctor(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		mscorlib::System::String* get_PostId();
		void set_PostId(mscorlib::System::String* value);
		static mscorlib::System::String* get_PostIDKey();
		mscorlib::System::String* ToString();
	};
}

