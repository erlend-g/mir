/*
 * Copyright © 2013 Canonical Ltd.
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 3,
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Authored by:
 * Eleni Maria Stea <elenimaria.stea@canonical.com>
 * Alan Griffiths <alan@octopull.co.uk>
 */

#ifndef MIR_GRAPHICS_NATIVE_GBM_PLATFORM_H_
#define MIR_GRAPHICS_NATIVE_GBM_PLATFORM_H_

#include "mir/graphics/native_platform.h"
#include "gbm_display_helpers.h"

namespace mg = mir::graphics;

namespace mir
{
namespace graphics
{
namespace gbm
{
class NativeGBMPlatform : public mg::NativePlatform
{
public:
    void initialize(int drm_fd);
    std::shared_ptr<GraphicBufferAllocator> create_buffer_allocator(
        std::shared_ptr<BufferInitializer> const& buffer_initializer);
    std::shared_ptr<PlatformIPCPackage> get_ipc_package();
    std::shared_ptr<InternalClient> create_internal_client();
    void fill_ipc_package(std::shared_ptr<BufferIPCPacker> const& packer, std::shared_ptr<Buffer> const& buffer) const;

    int drm_fd;
    helpers::GBMHelper gbm;
};
}
}
}

#endif // MIR_GRAPHICS_NATIVE_GBM_PLATFORM_H_
