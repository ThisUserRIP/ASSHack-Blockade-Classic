#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "Facebook_Unity_Gameroom_GameroomFacebook.h"
namespace Facebook_Unity::Facebook::Unity::Gameroom { struct GameroomFacebook; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace Facebook_Unity::Facebook::Unity { struct ResultContainer; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace Facebook_Unity::Facebook::Unity::Gameroom
{
	struct GameroomFacebook_OnComplete : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		void Invoke(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		mscorlib::System::IAsyncResult* BeginInvoke(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		void EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

