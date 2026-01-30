#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_ControllerMapLayoutManager.h"
namespace Rewired_Core::Rewired { struct ControllerMapLayoutManager; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct ControllerSetSelector; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace Rewired_Core::Rewired
{
	struct ControllerMapLayoutManager_Rule : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _tag;
		IL2CPP::Array<int32_t>* _categoryIds;
		int32_t _layoutId;
		Rewired_Core::Rewired::ControllerSetSelector* _controllerSetSelector;
		IL2CPP::Array<mscorlib::System::String*>* _preInitCategoryNames;
		mscorlib::System::String* _preInitLayoutName;
		void _ctor();
		void _ctor(Rewired_Core::Rewired::ControllerMapLayoutManager_Rule* source);
		void _ctor(mscorlib::System::String* tag, IL2CPP::Array<int32_t>* categoryIds, int32_t layoutId, Rewired_Core::Rewired::ControllerSetSelector* controllerSetSelector);
		mscorlib::System::String* get_tag();
		void set_tag(mscorlib::System::String* value);
		Rewired_Core::Rewired::ControllerSetSelector* get_controllerSetSelector();
		void set_controllerSetSelector(Rewired_Core::Rewired::ControllerSetSelector* value);
		int32_t get_categoryId();
		void set_categoryId(int32_t value);
		IL2CPP::Array<int32_t>* get_categoryIds();
		void set_categoryIds(IL2CPP::Array<int32_t>* value);
		int32_t get_layoutId();
		void set_layoutId(int32_t value);
		mscorlib::System::String* get_categoryName();
		void set_categoryName(mscorlib::System::String* value);
		IL2CPP::Array<mscorlib::System::String*>* get_categoryNames();
		void set_categoryNames(IL2CPP::Array<mscorlib::System::String*>* value);
		mscorlib::System::String* get_layoutName();
		void set_layoutName(mscorlib::System::String* value);
		bool get_isValid();
		void Initialize();
		mscorlib::System::Object* Rewired_Utils_Interfaces_IDeepCloneable_DeepClone();
	};
}

