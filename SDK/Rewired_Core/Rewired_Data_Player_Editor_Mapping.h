#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Data_Player_Editor.h"
namespace Rewired_Core::Rewired::Data { struct Player_Editor; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core { struct ubZlOyeOreOlVqBmvjKDEenhiPaM; };

namespace Rewired_Core::Rewired::Data
{
	struct Player_Editor_Mapping : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _enabled;
		int32_t _categoryId;
		int32_t _layoutId;
		int32_t get_categoryId();
		void set_categoryId(int32_t value);
		int32_t get_layoutId();
		void set_layoutId(int32_t value);
		bool get_enabled();
		void set_enabled(bool value);
		void _ctor();
		void _ctor(bool enabled, int32_t categoryId, int32_t layoutId);
		void Clear();
		Rewired_Core::Rewired::Data::Player_Editor_Mapping* Clone();
		Rewired_Core::ubZlOyeOreOlVqBmvjKDEenhiPaM* lXTImueGqguoiFahGxKqUnRJUTh();
	};
}

