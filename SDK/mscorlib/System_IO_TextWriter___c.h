#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_IO_TextWriter.h"
namespace mscorlib::System::IO { struct TextWriter; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::IO
{
	struct TextWriter___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::IO::TextWriter___c* __9;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		void __cctor_b__73_0(mscorlib::System::Object* state);
		void __cctor_b__73_1(mscorlib::System::Object* state);
		void __cctor_b__73_2(mscorlib::System::Object* state);
		void __cctor_b__73_3(mscorlib::System::Object* state);
		void __cctor_b__73_4(mscorlib::System::Object* state);
		void __cctor_b__73_5(mscorlib::System::Object* state);
		void __cctor_b__73_6(mscorlib::System::Object* state);
	};
}

