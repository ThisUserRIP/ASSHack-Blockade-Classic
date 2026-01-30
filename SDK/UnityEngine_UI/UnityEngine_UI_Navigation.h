#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_UI_Navigation_Mode.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_UI::UnityEngine::UI { struct Selectable; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct Navigation
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::Navigation_Mode m_Mode;
		bool m_WrapAround;
		UnityEngine_UI::UnityEngine::UI::Selectable* m_SelectOnUp;
		UnityEngine_UI::UnityEngine::UI::Selectable* m_SelectOnDown;
		UnityEngine_UI::UnityEngine::UI::Selectable* m_SelectOnLeft;
		UnityEngine_UI::UnityEngine::UI::Selectable* m_SelectOnRight;
		UnityEngine_UI::UnityEngine::UI::Navigation_Mode get_mode();
		void set_mode(UnityEngine_UI::UnityEngine::UI::Navigation_Mode value);
		bool get_wrapAround();
		void set_wrapAround(bool value);
		UnityEngine_UI::UnityEngine::UI::Selectable* get_selectOnUp();
		void set_selectOnUp(UnityEngine_UI::UnityEngine::UI::Selectable* value);
		UnityEngine_UI::UnityEngine::UI::Selectable* get_selectOnDown();
		void set_selectOnDown(UnityEngine_UI::UnityEngine::UI::Selectable* value);
		UnityEngine_UI::UnityEngine::UI::Selectable* get_selectOnLeft();
		void set_selectOnLeft(UnityEngine_UI::UnityEngine::UI::Selectable* value);
		UnityEngine_UI::UnityEngine::UI::Selectable* get_selectOnRight();
		void set_selectOnRight(UnityEngine_UI::UnityEngine::UI::Selectable* value);
		static UnityEngine_UI::UnityEngine::UI::Navigation get_defaultNavigation();
		bool Equals(UnityEngine_UI::UnityEngine::UI::Navigation other);
	};
}

