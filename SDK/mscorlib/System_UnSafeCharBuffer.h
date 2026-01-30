#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct Char; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System
{
	struct UnSafeCharBuffer
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		wchar_t* m_buffer;
		int32_t m_totalSize;
		int32_t m_length;
		void _ctor(wchar_t* buffer, int32_t bufferSize);
		void AppendString(mscorlib::System::String* stringToAppend);
	};
}

