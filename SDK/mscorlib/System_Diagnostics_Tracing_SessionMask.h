#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_UInt64.h"
namespace mscorlib::System { struct UInt64; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct SessionMask
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t m_mask;
		void _ctor(uint32_t mask);
		bool IsEqualOrSupersetOf(mscorlib::System::Diagnostics::Tracing::SessionMask m);
		static mscorlib::System::Diagnostics::Tracing::SessionMask get_All();
		static mscorlib::System::Diagnostics::Tracing::SessionMask FromId(int32_t perEventSourceSessionId);
		uint64_t ToEventKeywords();
		static mscorlib::System::Diagnostics::Tracing::SessionMask FromEventKeywords(uint64_t m);
		bool get_Item(int32_t perEventSourceSessionId);
		void set_Item(int32_t perEventSourceSessionId, bool value);
	};
}

