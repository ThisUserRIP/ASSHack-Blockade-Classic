#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Facebook_Unity_Example_MenuBase.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\Facebook_Unity\Facebook_Unity_OGActionType.h"
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };

namespace Assembly_CSharp::Facebook::Unity::Example
{
	struct AppRequests : Assembly_CSharp::Facebook::Unity::Example::MenuBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* requestMessage;
		mscorlib::System::String* requestTo;
		mscorlib::System::String* requestFilter;
		mscorlib::System::String* requestExcludes;
		mscorlib::System::String* requestMax;
		mscorlib::System::String* requestData;
		mscorlib::System::String* requestTitle;
		mscorlib::System::String* requestObjectID;
		int32_t selectedAction;
		IL2CPP::Array<mscorlib::System::String*>* actionTypeStrings;
		void GetGui();
		mscorlib::System::Nullable_1<Facebook_Unity::Facebook::Unity::OGActionType> GetSelectedOGActionType();
		void _ctor();
	};
}

