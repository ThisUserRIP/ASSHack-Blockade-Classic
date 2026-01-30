#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Facebook_Unity_Example_ConsoleBase.h"
#include "..\Facebook_Unity\Facebook_Unity_ShareDialogMode.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Facebook_Unity::Facebook::Unity { struct IResult; };

namespace Assembly_CSharp::Facebook::Unity::Example
{
	struct MenuBase : Assembly_CSharp::Facebook::Unity::Example::ConsoleBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Facebook_Unity::Facebook::Unity::ShareDialogMode shareDialogMode;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void GetGui();
		bool ShowDialogModeSelector();
		bool ShowBackButton();
		void HandleResult(Facebook_Unity::Facebook::Unity::IResult* result);
		void OnGUI();
		void AddStatus();
		void AddBackButton();
		void AddLogButton();
		void AddDialogModeButtons();
		void AddDialogModeButton(Facebook_Unity::Facebook::Unity::ShareDialogMode mode);
		void _ctor();
	};
}

