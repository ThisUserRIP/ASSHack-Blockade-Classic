#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Resources_ResourceFallbackManager.h"
namespace mscorlib::System::Resources { struct ResourceFallbackManager; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Resources
{
	struct ResourceFallbackManager__GetEnumerator_d__5 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		mscorlib::System::Globalization::CultureInfo* __2__current;
		mscorlib::System::Resources::ResourceFallbackManager* __4__this;
		mscorlib::System::Globalization::CultureInfo* _currentCulture_5__1;
		bool _reachedNeutralResourcesCulture_5__2;
		void _ctor(int32_t __1__state);
		void System_IDisposable_Dispose();
		bool MoveNext();
		mscorlib::System::Globalization::CultureInfo* System_Collections_Generic_IEnumerator_System_Globalization_CultureInfo__get_Current();
		void System_Collections_IEnumerator_Reset();
		mscorlib::System::Object* System_Collections_IEnumerator_get_Current();
	};
}

