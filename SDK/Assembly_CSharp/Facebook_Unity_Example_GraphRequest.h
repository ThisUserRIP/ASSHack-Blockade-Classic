#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Facebook_Unity_Example_MenuBase.h"
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Facebook_Unity::Facebook::Unity { struct IGraphResult; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp::Facebook::Unity::Example
{
	struct GraphRequest : Assembly_CSharp::Facebook::Unity::Example::MenuBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* apiQuery;
		UnityEngine_CoreModule::UnityEngine::Texture2D* profilePic;
		void GetGui();
		void ProfilePhotoCallback(Facebook_Unity::Facebook::Unity::IGraphResult* result);
		mscorlib::System::Collections::IEnumerator* TakeScreenshot();
		void _ctor();
	};
}

