#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct IFormatProvider; };
#include "UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct RectOffset : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Ptr;
		mscorlib::System::Object* m_SourceStyle;
		void _ctor();
		void _ctor(mscorlib::System::Object* sourceStyle, intptr_t source);
		void Finalize();
		void _ctor(int32_t left, int32_t right, int32_t top, int32_t bottom);
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(mscorlib::System::String* format, mscorlib::System::IFormatProvider* formatProvider);
		void Destroy();
		static intptr_t InternalCreate();
		static void InternalDestroy(intptr_t ptr);
		int32_t get_left();
		void set_left(int32_t value);
		int32_t get_right();
		void set_right(int32_t value);
		int32_t get_top();
		void set_top(int32_t value);
		int32_t get_bottom();
		void set_bottom(int32_t value);
		int32_t get_horizontal();
		int32_t get_vertical();
		UnityEngine_CoreModule::UnityEngine::Rect Add(UnityEngine_CoreModule::UnityEngine::Rect rect);
		UnityEngine_CoreModule::UnityEngine::Rect Remove(UnityEngine_CoreModule::UnityEngine::Rect rect);
		void Add_Injected(UnityEngine_CoreModule::UnityEngine::Rect& rect, UnityEngine_CoreModule::UnityEngine::Rect& ret);
		void Remove_Injected(UnityEngine_CoreModule::UnityEngine::Rect& rect, UnityEngine_CoreModule::UnityEngine::Rect& ret);
	};
}

