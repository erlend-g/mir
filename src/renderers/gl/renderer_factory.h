/*
 * Copyright © 2012 Canonical Ltd.
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 3,
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 * Authored by: Alexandros Frantzis <alexandros.frantzis@canonical.com>
 */

#ifndef MIR_RENDERER_GL_RENDERER_FACTORY_H_
#define MIR_RENDERER_GL_RENDERER_FACTORY_H_

#include "mir/compositor/renderer_factory.h"

namespace mir
{
namespace renderer
{
namespace gl
{

class RendererFactory : public compositor::RendererFactory
{
public:
    std::unique_ptr<compositor::Renderer> create_renderer_for(
        graphics::DisplayBuffer& display_buffer) override;
};

}
}
}

#endif