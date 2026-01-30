#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core
{
	struct ubZlOyeOreOlVqBmvjKDEenhiPaM : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t mVzCYWqbYYghItZlMQpQvKOIzXp;
		int32_t LqOnmkDBVREAGnKiZgYDgLjZapuK;
		bool voIEsCtdZpaVgEngsPPTJZAIrCtL;
		int32_t get_categoryId();
		void set_categoryId(int32_t value);
		int32_t get_layoutId();
		void set_layoutId(int32_t value);
		bool get_startEnabled();
		void set_startEnabled(bool value);
		void _ctor(int32_t categoryId, int32_t layoutId, bool startEnabled);
	};
}

